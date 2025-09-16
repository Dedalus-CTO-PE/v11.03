create table patrfdpf
(
rffund      varchar2(3),
rfdtyp      varchar2(3),
rfdate      varchar2(8),
rfnumb      number(8,0),
rfamtrf     number(14,2),
lf          varchar2(1),
constraint patrfdp1 primary key( 
rffund,
rfdtyp,
rfdate)
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
create public synonym patrfdpf for patrfdpf;
