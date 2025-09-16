create table pat10oxf
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
  pt0ospr8    varchar2(47) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pati1xo1 primary key( 
opcode)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pati1xo2 on pat10oxf
(
odesc,
opcode
)
  tablespace pas_indx; 
create unique index pati1xo3 on pat10oxf
(
pt0oblkn,
opcode
)
  tablespace pas_indx; 
