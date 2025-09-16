create table pribulkf
(
  dprbbclm    char(8) default ' ' not null,
  prbbinvn    char(8) default ' ' not null,
  prbbdoct    char(10) default ' ' not null,
  prbbbulk    char(3) default ' ' not null,
  prbbcode    char(6) default ' ' not null,
  prbbdate    char(8) default ' ' not null,
  dprbbsta    char(1) default ' ' not null,
  prbbrdat    char(8) default ' ' not null,
  prbbregr    char(3) default ' ' not null,
  prbbamou    decimal(14,2) default 0 not null,
  prbbpayd    decimal(14,2) default 0 not null,
  prbbdsco    decimal(14,2) default 0 not null,
  prbbmedn    char(10) default ' ' not null,
  prbbitmn    char(9) default ' ' not null,
  prbbgstm    decimal(14,2) default 0 not null,
  prbbspar    char(27) default ' ' not null,
  lf          char(1)
);
create unique index pribulk1 on pribulkf
(
dprbbclm,
prbbinvn,
prbbitmn,
prbbregr
);
create unique index pribulk2 on pribulkf
(
prbbbulk,
prbbcode,
prbbdoct,
prbbinvn,
dprbbclm,
prbbitmn,
prbbregr
);
create unique index pribulk3 on pribulkf
(
dprbbsta,
prbbbulk,
prbbcode,
prbbinvn,
prbbitmn,
dprbbclm,
prbbregr
);
create unique index pribulk4 on pribulkf
(
prbbbulk,
prbbcode,
prbbdoct,
prbbinvn,
prbbitmn,
dprbbclm,
prbbregr
);
create unique index pribulk5 on pribulkf
(
prbbdoct,
prbbbulk,
prbbcode,
prbbinvn,
prbbitmn,
dprbbclm,
prbbregr
);
create unique index pribulk6 on pribulkf
(
dprbbsta,
dprbbclm,
prbbinvn,
prbbitmn,
prbbbulk,
prbbcode,
prbbregr
);
revoke all on pribulkf from public ; 
grant select on pribulkf to public ; 
