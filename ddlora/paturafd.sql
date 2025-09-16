create table paturadf
(
urrtype     varchar2(1),
urdate      varchar2(8),
ururno      varchar2(8),
ursyst      number(1,0),
urspare     varchar2(7),
lf          varchar2(1),
constraint paturad1 primary key( 
urrtype,
urdate,
ururno)
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
create public synonym paturadf for paturadf;
create unique index paturad2 on paturadf
(
ururno,
urrtype,
urdate
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
