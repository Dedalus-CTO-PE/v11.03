create table resluraf
(
reluurn     varchar2(8),
relurdt     varchar2(8),
relurtm     varchar2(5),
relurun     varchar2(4),
relumsn     varchar2(1),
relusdt     varchar2(8),
relustm     varchar2(5),
reluspc     varchar2(4),
relufur     varchar2(1),
relupid     varchar2(16),
reluucs     varchar2(12),
reluusc     varchar2(12),
reludss     varchar2(10),
relunor     varchar2(1),
relurty     varchar2(1),
relurst     varchar2(2),
relulab     varchar2(3),
reluspa     varchar2(4),
lf          varchar2(1),
constraint reslura1 primary key( 
reluurn,
relurdt,
relurtm,
relurun)
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
create public synonym resluraf for resluraf;
create unique index reslura2 on resluraf
(
relurdt,
relurtm,
relurun,
reluurn
)
  tablespace iba01ax 
initrans 3 
storage ( 
  initial 16k 
); 
