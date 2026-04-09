ALL_FLAGS = {
    "GENERATE" : "#gen",
    "NOGENERATE" : "#nogen",
    "FUNCTION_START" : "#fs",
    "FUNCTION_END" : "#fe",
    "FUNCTION_NAME" : "#n:",
    "FUNCTION_PROCESS" : "#p:",
    "FUNCTION_OUTPUT" : "#o:",
}

Flag_Position = [
    # Flag setup listed below.
    #{"TYPE": "FLAG_TYPE", "LOCATION": 123, "UNCLEAN_FLAG": "123"}
]

Target_File_Name = ""

Target_File = "Target File Not Found."

def Set_Target_File(self, Potential:str):
    Target_File_Name = Potential

    try:
        Target_File = open(Target_File_Name)
    except:
        print("Target file could not be found.")
        Target_File = "Target File Not Found."

def Output_Flag_List(self):
    # Read through each flag.
    for Flag in Flag_Position:
        # Output its info.
        print(f"Type : {Flag_Position[Flag]["TYPE"]}")
        print(f"Location : {Flag_Position[Flag]["LOCATION"]}")
        print(f"Uncleaned Flag : {Flag_Position[Flag]["UNCLEAN_FLAG"]}")
        print("\n--------------------------------------------")

def Identify_Main_Flags(self):
    # Return to start of file.
    Target_File.seek(0)

    # Read through the file
    for Line in Target_File:
        # Store the line's starting position to be used later.
        Starting_Position = Target_File.tell()

        # Check if its a flag.
        _Process_Flag(Line)

def _Flag_Dentify(self, Flag:str):
    # Check if its a comment
    if Flag.startswith("#"):
        # Clone the flag.
        Flag2 = Flag

        Flag2 = Flag2.replace(" ", "")
        Flag2 = Flag2.lower()

        # Check it against the flag list.
        for Key in ALL_FLAGS:
            if ALL_FLAGS[Key] == Flag2:
                return Key
        
    # If it wasnt found return nothing to true check later.
    return ""

def _Process_Flag(self, Flag:str, Position:int):

    # Get the potential key
    Potential_Key = _Flag_Dentify(Flag=Flag)

    # Check if there is no key or it is empty, if there is a key then add it to the keys.
    if Potential_Key and Potential_Key != "":
        # Add it.
        Flag_Position.append(
            {
                "TYPE": Potential_Key,
                "LOCATION": Position, 
                "UNCLEAN_FLAG": Flag
            }
        )