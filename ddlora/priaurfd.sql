create table priauraf
(
prardebt    varchar2(8),
dprarsca    varchar2(2),
dpraruni    varchar2(3),
prarrect    varchar2(12),
praramou    number(14,2),
prarrfdt    varchar2(8),
prarport    varchar2(2),
praroper    varchar2(4),
prarspar    varchar2(8),
lf          varchar2(1),
constraint priaura1 primary key( 
prardebt,
dprarsca,
dpraruni)
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
create public synonym priauraf for priauraf;
