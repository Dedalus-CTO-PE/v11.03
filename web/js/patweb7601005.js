//jsVersion  : V11.03.01
//========================================================================
// Program   : patweb7601005.js
// Function  : Functions Used in patweb7601005.html
//========================================================================
function InitTable(TableView) {
document.title= "Invoice List for UR No "+ PatientURN;
switch (TableView) {
case 0: {
 t = new Table(1,0,2,"100%","center",35,40);

 if(document.PatientLinks.ibcnmhos.value=="1") {
  t.addColumn("Hosp","String",2,2,"left","","0",30)
 }

  t.addColumn("Visit No","String",3,3,"left","","",45)
  t.addColumn("Visit Date","String",4,5,"left","","",65)
// 5 -  visitDate used for sorting
// 6 is for the invoice link and icon link
  t.addColumn("Invoice No.","ImageText",7,18,"left","InvoiceIcon","6",70,8)
//8 is for the icon (0 = donot display icon, 1= display icon, 2=transparent icon)

 if(document.PatientLinks.ptcnirai.value=="2") {
  t.addColumn("Invoice Date/Time","DateTime",9,9,"left","","",110)
  t.addColumn("Raised By","String",10,10,"left","","",60)
 }
 else
 {
  t.addColumn("Invoice Date","DateTime",9,9,"left","","",110)

  if(document.PatientLinks.ptcnirai.value=="1"){
    t.addColumn("Raised By","String",10,10,"left","","",60)
  }

 }

  t.addColumn("Medical Prac.","String",11,11,"left","","",75)
 if(document.PatientLinks.nocompcl.value!=1) {
  t.addColumn("Compensable","String",12,12,"left","","",90)
 }
 if(document.PatientLinks.cfeetype.value=="5") {
  t.addColumn("Contract","String",13,13,"left","","",90)
 }
 else{
  t.addColumn("Health Fund","String",13,13,"left","","",70)
 }

  t.addColumn("Invoice Total","Number",14,19,"right","","",50)
  t.addColumn("Paid","Number",15,22,"right","","",50)
  t.addColumn("Journals","Number",16,20,"right","","",50)
  t.addColumn("Outstanding","Number",17,21,"right","","",45)
  AddTableRows();

 if(document.PatientLinks.ibcnmhos.value=="1") {
   AscDsc=0;
   TableOutput(1,0);    // Order Column,Asc Dsc
 }
 else{
   AscDsc=0;
   TableOutput(0,0); 
 }
 break; }
 }
}
