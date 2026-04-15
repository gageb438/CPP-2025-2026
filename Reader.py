class Reader():
    # Init initializes the class.
    def __init__(self):
        # Set the defaults.
        self.Target_File_Name = ""
        self.ALL_FLAGS = {
            "GENERATE" : "#gen",
            "NOGENERATE" : "#nogen",
            "FUNCTION_START" : "#fs",
            "FUNCTION_END" : "#fe",
            "FUNCTION_NAME" : "#n:",
            "FUNCTION_PROCESS" : "#p:",
            "FUNCTION_OUTPUT" : "#o:"
        }
        self.Flag_Position = [
            # Flag setup listed below.
            #{"TYPE": "FLAG_TYPE", "LOCATION": 123, "UNCLEAN_FLAG": "123"}
        ]

        self.Open = False

    # Run utilizes identify_main_flags to check the file for flags and uses the builder to build the html file.
    # Then it 
    def Run(self):
        # Identify the flags
        self._Identify_Main_Flags()

        # Check if there is a hostile flag AND count function start/ends
        Function_Starts = 0
        Function_Ends = 0
        Hostile = False
        Non_Hostile = False

        for Flag in self.Flag_Position:
            if Flag["TYPE"] == "NOGENERATE":
                Hostile = True
            elif Flag["TYPE"] == "GENERATE":
                Non_Hostile = True
            elif Flag["TYPE"] == "FUNCTION_START":
                Function_Starts += 1
            elif Flag["TYPE"] == "FUNCTION_END":
                Function_Ends += 1
        
        # Check if there was a positive flag set
        if Hostile == False and Non_Hostile == True:
            # Now check if there was equal starts and ends
            if Function_Starts == Function_Ends:
                # Generate
                self._Generate(Function_Starts)
            else:
                print(f"There was {Function_Starts} function starts found, while there was {Function_Ends} found. Each function must be started and ended.")
                print(f"Generation will cease in this file : {self.Target_File_Name}.")
        else:
            print(f"Flags are not valid in this file[{self.Target_File_Name}]. Generation will cease with current flag setup.\nHeres our setup : [GENERATE : {Non_Hostile}] and [NON_GENERATE : {Hostile}]")

    # Set target file allows the user to attempt to set the target file.
    def Set_Target_File(self, Potential:str):
        # Check if the file open status is true (meaning there is a file variable and it is open.) and close the old file.
        if self.Open:
            try:
                self.Target_File.close()
                self.Open = False
            except Exception as Error:
                print(Error)
        
        # Store former name
        Former = self.Target_File_Name
        
        # Set the file name to the potential
        self.Target_File_Name = Potential
        
        # Check if the file is there and attempt to open it.
        try:
            self.Target_File = open(self.Target_File_Name)
            self.Open = True

            return True
        except Exception as Error:
            # If there was a failure output that it couldnt be opened then adjust the variable
            print("File not opened.")
            print(Error)
            self.Open = False
            
            try:
                # Open the file, set the target name, and change the flag.
                if Former != "":
                    self.Target_File_Name = Former
                    self.Target_File = open(self.Target_File_Name)
                    self.Open = True
            except Exception as Error_2:
                # Output the error.
                print(Error_2)

            # File wasnt opened.
            return False
        
    # Output flag list outputs all the flags stored, their location, and the uncleaned version. 
    # This function is primarily used for debugging and developing.
    def Output_Flag_List(self):
        # Read through each flag.
        for Flag in self.Flag_Position:
            # Output its info.
            print(f'Type : {Flag["TYPE"]}')
            print(f'Location : {Flag["LOCATION"]}')
            print(f'Uncleaned Flag (newline stripped for output.): "{Flag["UNCLEAN_FLAG"].rstrip()}"')
            print("--------------------------------------------\n")

    # Identify main flags is the general driver, it reads through the target file and finds the flags, then stores them.
    def _Identify_Main_Flags(self):
        # Check if the file is found. If not, output an error and return.
        if self.Open == False:
            print("No Target File Found.")
            return
        
        # Clear the flag list
        self.Flag_Position = []

        #print("[CONSOLE] : Target file found.")
        # If it was found, go to the start of the file.
        self.Target_File.seek(0)
        Starting_Position = self.Target_File.tell()
        
        # Read through the file
        for Line in self.Target_File:
            # Store the line's starting position to be used later.
            Starting_Position += len(Line)

            # Check if its a flag.
            #print("[CONSOLE] : Potentially processing.")
            self._Process_Flag(Line, Starting_Position)

    # Flag dentify allows other functions in this class to pass a potential flag and check if it is a flag, then return the
    # correlating flag type to the caller.
    def _Flag_Dentify(self, Flag:str):
        # Check if its a comment
        if Flag.startswith("#"):
            # Clone the flag.
            Flag2 = Flag

            Flag2 = Flag2.strip().replace(" ", "").lower()

            # Check it against the flag list.
            for Key in self.ALL_FLAGS:
                if self.ALL_FLAGS[Key] in Flag2:
                    return Key
            
        # If it wasnt found return nothing to true check later.
        return ""
    
    # Process flag takes a potential flag, and the position of hte flag in the file.
    # It processes it by validating its a flag and then adds it to the flag list.
    def _Process_Flag(self, Flag:str, Position:int):
        # Get the potential key
        Potential_Key = self._Flag_Dentify(Flag=Flag)

        # Check if there is no key or it is empty, if there is a key then add it to the 
        if Potential_Key and Potential_Key != "":
            # Check if it is a no generate flag and cancel the loading instantly.
            if Potential_Key == self.ALL_FLAGS["NOGENERATE"]:
                print(f"No-generate flag has been found in file : {self.Target_File_Name} at position {Position}. A output file has been excluded.")
                return
            
            # Add it.
            self.Flag_Position.append(
                {
                    "TYPE": Potential_Key,
                    "LOCATION": Position, 
                    "UNCLEAN_FLAG": Flag
                }
            ) #

    # Generate generates the html file.
    def _Generate(self, Functions:int):
        # Initialize files
        HTML_Output_File_Name = self.Target_File_Name.rstrip(".py") + ".html"
        HTML_Output_File = open(HTML_Output_File_Name, "w")
        HTML_Template_File = open("C:\\Users\\jwboy\\Documents\\GitHub\\CPP-2025-2026\\template.html", "r")

        # Hardcoded HTML template.. (bad idea)
        for Number in range(46):
            Line = HTML_Template_File.readline()
            HTML_Output_File.write(Line)


        # Get the generate function
        Stored_Function = self.Flag_Position.pop(0)

        for _ in range(Functions):
            Function = self.Flag_Position.pop(0)

            for Line in range(72-47):
                if "<!--Function_Name-->" in Line:
                    #HTML_Output_File.write(f"    <h2><!--Function_Name-->{}</h2>")
                    pass
                        

                
                    

        print("File generated.")

        HTML_Output_File.close()
        HTML_Template_File.close()
        self.Target_File.close()