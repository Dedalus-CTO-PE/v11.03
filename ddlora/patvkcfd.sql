create table pataudvk
(
ptvkaudd    varchar2(8),
ptvkaudt    varchar2(8),
ptvkaudp    varchar2(2),
ptvkaudr    varchar2(1),
ptvkauds    number(1,0),
ptvkaudo    varchar2(4),
dptvkbil    varchar2(8),
ptvkcard    varchar2(20),
ptvkcexp    varchar2(8),
ptvkcxmp    varchar2(3),
ptvkfmly    varchar2(12),
ptvkcomp    varchar2(3),
ptvkspar    varchar2(27),
lf          varchar2(1)
)
tablespace ibadat0x 
initrans 2 
storage ( 
  initial 16k 
);
create public synonym pataudvk for pataudvk;
create index pataudvk on pataudvk
(
ptvkaudd,
ptvkaudt,
ptvkaudp,
ptvkaudr
)
tablespace ibandx0x 
initrans 3 
storage ( 
  initial 16k 
); 
create table patvkcaf
(
dptvkbil    varchar2(8),
ptvkcard    varchar2(20),
ptvkcexp    varchar2(8),
ptvkcxmp    varchar2(3),
ptvkfmly    varchar2(12),
ptvkcomp    varchar2(3),
ptvkspar    varchar2(27),
lf          varchar2(1),
constraint patvkca1 primary key( 
dptvkbil)
)
tablespace ibandx0x 
initrans 2 
storage ( 
  initial 16k 
) 
enable primary key using index 
  tablespace ibadat0x 
  initrans 3 
  storage ( 
    initial 16k 
  ); 
create public synonym patvkcaf for patvkcaf;
