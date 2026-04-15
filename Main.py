import Reader

My_Reader = Reader.Reader()

Success = My_Reader.Set_Target_File("C:\\Users\\jwboy\\Documents\\GitHub\\CPP-2025-2026\\card_dealer.py")

if Success:
    My_Reader._Identify_Main_Flags()
    My_Reader.Output_Flag_List()
