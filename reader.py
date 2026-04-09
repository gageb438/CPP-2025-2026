class Reader():
    # Init initializes the class.
    def __init__(self):
        # Set the defaults.
        self.Target_File_Name = ""
        self.Target_File = "Target File Not Found."
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

    # Set target file allows the user to attempt to set the target file.
    def Set_Target_File(self, Potential:str):
        # Set the file name to the potential
        self.Target_File_Name = Potential

        # Try to open the target file, if not, output an error and reset the target file.
        try:
            self.Target_File = open(self.Target_File_Name)
        except:
            print("Target file could not be found.")
            self.Target_File = "Target File Not Found."

    # Output flag list outputs all the flags stored, their location, and the uncleaned version.
    def Output_Flag_List(self):
        # Read through each flag.
        for Flag in self.Flag_Position:
            # Output its info.
            print(f"Type : {self.Flag_Position[Flag]["TYPE"]}")
            print(f"Location : {self.Flag_Position[Flag]["LOCATION"]}")
            print(f"Uncleaned Flag : {self.Flag_Position[Flag]["UNCLEAN_FLAG"]}")
            print("\n--------------------------------------------")

    # Identify main flags is the general driver, it reads through the target file and finds the flags, then stores them.
    def Identify_Main_Flags(self):
        # Check if the file is found. If not, output an error and return.
        if self.Target_File == "Target File Not Found.":
            print("Target file is not found. API not compiled.")
            return
        
        # If it was found, go to the start of the file.
        self.Target_File.seek(0)

        # Read through the file
        for Line in self.Target_File:
            # Store the line's starting position to be used later.
            Starting_Position = self.Target_File.tell()

            # Check if its a flag.
            _Process_Flag(Line, Starting_Position)

    # Flag dentify allows other functions in this class to pass a potential flag and check if it is a flag, then return the
    # correlating flag type to the caller.
    def _Flag_Dentify(self, Flag:str):
        # Check if its a comment
        if Flag.startswith("#"):
            # Clone the flag.
            Flag2 = Flag

            Flag2 = Flag2.replace(" ", "")
            Flag2 = Flag2.lower()

            # Check it against the flag list.
            for Key in self.ALL_FLAGS:
                if self.ALL_FLAGS[Key] == Flag2:
                    return Key
            
        # If it wasnt found return nothing to true check later.
        return ""
    
    # Process flag takes a potential flag, and the position of hte flag in the file.
    # It processes it by validating its a flag and then adds it to the flag list.
    def _Process_Flag(self, Flag:str, Position:int):
        # Get the potential key
        Potential_Key = self._Flag_Dentify(Flag=Flag)

        # Check if there is no key or it is empty, if there is a key then add it to the keys.
        if Potential_Key and Potential_Key != "":
            # Add it.
            self.Flag_Position.append(
                {
                    "TYPE": Potential_Key,
                    "LOCATION": Position, 
                    "UNCLEAN_FLAG": Flag
                }
            )

    