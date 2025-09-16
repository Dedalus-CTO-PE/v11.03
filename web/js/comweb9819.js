//jsVersion  : V11.03.02
//========================================================================
// Hospital level parameter options 
// Usage:                               
//
// ListItem.options[ListItem.options.length]=
// new Option("A","B|C|D|E|F|");
//
// A = Selection list option description
// B = 8 character parameter name
// C = Parameter type 0 - Text
//                    1 - Date
//                    2 - Time
//                    3 - HCP Code
//                    4 - Category/Code
//                    5 - Yes/No
//                    6 - Numeric
// D = Parameter name text - B (Parameter Name)
// E = Category for paremeter type 4
// F = Default Value
//========================================================================
// Examples
//========================================================================
//  ListItem.options[ListItem.options.length]=
//  new Option("Text","TESTTEXT|0|Text Parameter||Default text|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Date","TESTDATE|1|Date Parameter||20201119|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Time","TESTTIME|2|Time Parameter||09:00:00|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("HCP","TESTHCPP|3|HCP Parameter||BLAA|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Category Code","TESTCATC|4|Cat CL Parameter|CL|T  |");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Yes/No","TESTYESN|5|Text Parameter||1|");
//
//  ListItem.options[ListItem.options.length]=
//  new Option("Number","TESTNUMB|6|Numeric Parameter||99|");
//========================================================================
function AddParameters(ListItem) {
  ListItem.options[ListItem.options.length]=
  new Option("Using Auto Open Outpatient Clinics",
      "OTCNAUTC|5|Using Auto Open Outpatient Clinics - OTCNAUTC||0|");
//
  ListItem.options[ListItem.options.length]=
  new Option("Auto Open Outpatient Clinics Default Number of Weeks",
      "OTCNAUTW|6|Auto Open Outpatient Clinics Default Number of Weeks - OTCNAUTW||0|");
//
  ListItem.options[ListItem.options.length]=
  new Option("Display Confirmed Demographic / PMI Date in RED",
      "OTCFDRED|0|Display Confirmed Demographic / PMI Date in RED - OTCFDRED||Yes|");
//
  ListItem.options[ListItem.options.length]=
  new Option("Number of days to check for Display Confirmed Demographics in RED",
      "OTCFDDAY|6|Number of days to check for Display Confirmed Demographics in RED - OTCFDDAY||0|");
//
  ListItem.options[ListItem.options.length]=
  new Option("ED in Hours Start Time",
      "EMSTRTIM|2|ED in Hours Start Time - EMSTRTIM||09:00:00|");

  ListItem.options[ListItem.options.length]=
  new Option("ED in Hours End Time",
      "EMENDTIM|2|ED in Hours End Time - EMENDTIM||17:00:00|");

  ListItem.options[ListItem.options.length]=
  new Option("ED In Hours Days",
      "EMWKDAYS|7|ED In Hours Days - EMWKDAYS|||");

  ListItem.options[ListItem.options.length]=
  new Option("Overdue Leave Highlight (mins)",
      "PTCNOLDR|6|Overdue Leave Highlight (mins) - PTCNOLDR||30|");

  ListItem.options[ListItem.options.length]=
  new Option("Preferred Discharge Time",
      "PTCNPDTM|2|Preferred Discharge Time - PTCNPDTM||09:00:00|");

  ListItem.options[ListItem.options.length]=
  new Option("Cash Draw for Patient Portal Receipts (Code)",
      "PTCNPCDR|0|Cash Draw Code for Patient Portal Receipts (Code)|||");

  ListItem.options[ListItem.options.length]=
  new Option("National Claim Form to be sent to the Patient Portal (Code)",
  "PTCNPNCF|0|National Claim Form to be sent to the Patient Portal (Code)|||");
}
