create table priholdf
(
prhodebt    varchar2(8),
dprhoscn    varchar2(2),
prhohold    number(1,0),
prhospar    varchar2(40),
lf          varchar2(1),
constraint prihola1 primary key( 
prhodebt,
dprhoscn)
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
create public synonym priholdf for priholdf;
