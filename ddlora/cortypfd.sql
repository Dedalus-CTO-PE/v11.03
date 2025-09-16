create table cortypaf
(
cotyctyp    varchar2(5),
cotycdsc    varchar2(35),
cotycsec    varchar2(2),
cotycspa    varchar2(80),
lf          varchar2(1),
constraint cortypa1 primary key( 
cotyctyp)
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
create public synonym cortypaf for cortypaf;
