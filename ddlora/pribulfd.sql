create table pribulkf
(
  dprbbclm    varchar2(8) default ' ' not null,
  prbbinvn    varchar2(8) default ' ' not null,
  prbbdoct    varchar2(10) default ' ' not null,
  prbbbulk    varchar2(3) default ' ' not null,
  prbbcode    varchar2(6) default ' ' not null,
  prbbdate    varchar2(8) default ' ' not null,
  dprbbsta    varchar2(1) default ' ' not null,
  prbbrdat    varchar2(8) default ' ' not null,
  prbbregr    varchar2(3) default ' ' not null,
  prbbamou    number(14,2) default 0 not null,
  prbbpayd    number(14,2) default 0 not null,
  prbbdsco    number(14,2) default 0 not null,
  prbbmedn    varchar2(10) default ' ' not null,
  prbbitmn    varchar2(9) default ' ' not null,
  prbbgstm    number(14,2) default 0 not null,
  prbbspar    varchar2(27) default ' ' not null,
  lf          varchar2(1) default ' ' not null,
constraint pribulk1 primary key( 
dprbbclm,
prbbinvn,
prbbitmn,
prbbregr)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create unique index pribulk2 on pribulkf
(
prbbbulk,
prbbcode,
prbbdoct,
prbbinvn,
dprbbclm,
prbbitmn,
prbbregr
)
  tablespace pas_indx; 
create unique index pribulk3 on pribulkf
(
dprbbsta,
prbbbulk,
prbbcode,
prbbinvn,
prbbitmn,
dprbbclm,
prbbregr
)
  tablespace pas_indx; 
create unique index pribulk4 on pribulkf
(
prbbbulk,
prbbcode,
prbbdoct,
prbbinvn,
prbbitmn,
dprbbclm,
prbbregr
)
  tablespace pas_indx; 
create unique index pribulk5 on pribulkf
(
prbbdoct,
prbbbulk,
prbbcode,
prbbinvn,
prbbitmn,
dprbbclm,
prbbregr
)
  tablespace pas_indx; 
create unique index pribulk6 on pribulkf
(
dprbbsta,
dprbbclm,
prbbinvn,
prbbitmn,
prbbbulk,
prbbcode,
prbbregr
)
  tablespace pas_indx; 
