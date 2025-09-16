create table pmsctcaf
(
pmctadmn    varchar2(8),
pmcturno    varchar2(8),
pmctvdat    varchar2(8),
pmctsnam    varchar2(30),
pmctsad1    varchar2(35),
pmctsad2    varchar2(35),
pmctsad3    varchar2(35),
pmctsad4    varchar2(35),
pmctspco    varchar2(8),
pmctsphn    varchar2(12),
pmctcont    varchar2(30),
pmctrefn    varchar2(20),
pmctspar    varchar2(80),
lf          varchar2(1),
constraint pmsctca1 primary key( 
pmctadmn)
)
tablespace iba01ad 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace iba01ax 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym pmsctcaf for pmsctcaf;
