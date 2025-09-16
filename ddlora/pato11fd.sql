create table pato11af
(
  opcode      varchar2(9) default ' ' not null,
  odesc       varchar2(70) default ' ' not null,
  oflag       varchar2(1) default ' ' not null,
  pt0oblkn    varchar2(4) default ' ' not null,
  oagegp      varchar2(1) default ' ' not null,
  ptxoall1    number(3,0) default 0 not null,
  ptxoahl1    number(3,0) default 0 not null,
  pt0o2agp    varchar2(1) default ' ' not null,
  ptxoall2    number(3,0) default 0 not null,
  ptxoahl2    number(3,0) default 0 not null,
  osex        varchar2(1) default ' ' not null,
  pt0oadtp    varchar2(1) default ' ' not null,
  pt0osacd    varchar2(9) default ' ' not null,
  odagger     varchar2(1) default ' ' not null,
  oarea       varchar2(1) default ' ' not null,
  pt0omi9c    varchar2(9) default ' ' not null,
  dpt0ocmf    varchar2(2) default ' ' not null,
  dpt0ov1c    varchar2(1) default ' ' not null,
  dpt0ov2c    varchar2(1) default ' ' not null,
  pt0ov1mp    varchar2(9) default ' ' not null,
  dpt0ov3c    varchar2(1) default ' ' not null,
  pt0ov2mp    varchar2(9) default ' ' not null,
  pt0oslvl    varchar2(1) default ' ' not null,
  dpt0ov4c    varchar2(1) default ' ' not null,
  dpt0ov5c    varchar2(1) default ' ' not null,
  pt0odtmn    varchar2(1) default ' ' not null,
  dpt0ov6c    varchar2(1) default ' ' not null,
  pt0odsc2    varchar2(200) default ' ' not null,
  dpt0ov7c    varchar2(1) default ' ' not null,
  dpt0ov8c    varchar2(1) default ' ' not null,
  dpt0ov9c    varchar2(1) default ' ' not null,
  dpt0ovxc    varchar2(1) default ' ' not null,
  dpt0ovx1    varchar2(1) default ' ' not null,
  ptospr11    varchar2(50) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pato11a1 primary key( 
opcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pato11a2 on pato11af
(
odesc,
opcode
)
  tablespace pas_indx; 
create unique index pato11a3 on pato11af
(
pt0oblkn,
opcode
)
  tablespace pas_indx; 
