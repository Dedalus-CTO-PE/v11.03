create table patsfaaf
(
ptsfcode    varchar2(1),
ptsfdesc    varchar2(78),
ptsfspar    varchar2(20),
lf          varchar2(1),
constraint patsfaa1 primary key( 
ptsfcode)
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
create public synonym patsfaaf for patsfaaf;
