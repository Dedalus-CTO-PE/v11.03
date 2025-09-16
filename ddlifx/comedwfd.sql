create table comedwaf
(
  cmeddstr    char(3) default ' ' not null,
  cmedcntn    char(8) default ' ' not null,
  cmedsdat    char(8) default ' ' not null,
  cmededat    char(8) default ' ' not null,
  cmedcdat    char(8) default ' ' not null,
  cmedctim    char(8) default ' ' not null,
  cmedcuid    char(10) default ' ' not null,
  cmedrdat    char(8) default ' ' not null,
  cmedrtim    char(8) default ' ' not null,
  cmedruid    char(10) default ' ' not null,
  cmedsntd    char(8) default ' ' not null,
  cmedsntt    char(8) default ' ' not null,
  cmedsuid    char(10) default ' ' not null,
  cmedrsnd    char(8) default ' ' not null,
  cmedrsnt    char(8) default ' ' not null,
  cmedrsui    char(10) default ' ' not null,
  cmedspar    char(100) default ' ' not null,
  lf          char(1)
);
create unique index comedwa1 on comedwaf
(
cmeddstr,
cmedcntn
);
create unique index comedwa2 on comedwaf
(
cmeddstr,
cmedsdat,
cmedcntn
);
create unique index comedwa3 on comedwaf
(
cmedcdat,
cmeddstr,
cmedcntn
);
revoke all on comedwaf from public ; 
grant select on comedwaf to public ; 
