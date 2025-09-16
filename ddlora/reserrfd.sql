create table reserraf
(
reerrdt     varchar2(8),
reerrtm     varchar2(5),
reerrun     varchar2(4),
reermsg     varchar2(20),
reerspa     varchar2(80),
lf          varchar2(1),
constraint reserra1 primary key( 
reerrdt,
reerrtm,
reerrun)
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
create public synonym reserraf for reserraf;
