create table resphraf
(
rephrdt     varchar2(8),
rephrtm     varchar2(5),
rephrun     varchar2(4),
rephfur     varchar2(1),
rephpid     varchar2(16),
rephvis     varchar2(8),
rephnam     varchar2(60),
rephlab     varchar2(3),
rephrrn     varchar2(4),
rephcdt     varchar2(8),
rephctm     varchar2(5),
rephnor     varchar2(1),
rephcon     varchar2(1),
rephtct     varchar2(1),
rephcom     varchar2(1),
rephstk     varchar2(20),
lf          varchar2(1),
constraint resphra1 primary key( 
rephrdt,
rephrtm,
rephrun)
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
create public synonym resphraf for resphraf;
create unique index resphra2 on resphraf
(
rephpid,
rephcdt,
rephctm,
rephrdt,
rephrtm,
rephrun
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
