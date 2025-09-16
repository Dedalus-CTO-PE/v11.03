create table pricmntf
(
prcmdebt    varchar2(8),
dprcmscn    varchar2(2),
dprcmlno    varchar2(3),
prcmline    varchar2(70),
lf          varchar2(1),
constraint pricmnt1 primary key( 
prcmdebt,
dprcmscn,
dprcmlno)
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
create public synonym pricmntf for pricmntf;
