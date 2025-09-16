create table amsaudin
(
  aminaudd    char(8) default ' ' not null,
  aminaudt    char(8) default ' ' not null,
  aminaudp    char(2) default ' ' not null,
  aminaudr    char(1) default ' ' not null,
  aminauds    decimal(1,0) default 0 not null,
  aminaudo    char(4) default ' ' not null,
  aminreg     char(2) default ' ' not null,
  aminass     char(12) default ' ' not null,
  amincom     char(5) default ' ' not null,
  amincod     char(30) default ' ' not null,
  aminref     char(30) default ' ' not null,
  amincon     char(30) default ' ' not null,
  amindat     char(8) default ' ' not null,
  aminval     decimal(14,2) default 0 not null,
  aminapr     decimal(14,2) default 0 not null,
  aminua1     decimal(14,2) default 0 not null,
  aminua2     decimal(14,2) default 0 not null,
  aminur1     char(30) default ' ' not null,
  aminur2     char(30) default ' ' not null,
  aminud1     char(8) default ' ' not null,
  aminud2     char(8) default ' ' not null,
  aminuy1     char(1) default ' ' not null,
  aminuy2     char(1) default ' ' not null,
  aminspa     char(20) default ' ' not null,
  lf          char(1)
);
create index amsaudin on amsaudin
(
aminaudd,
aminaudt,
aminaudp,
aminaudr
);
revoke all on amsaudin from public ; 
grant select on amsaudin to public ; 
create table amsinsaf
(
  aminreg     char(2) default ' ' not null,
  aminass     char(12) default ' ' not null,
  amincom     char(5) default ' ' not null,
  amincod     char(30) default ' ' not null,
  aminref     char(30) default ' ' not null,
  amincon     char(30) default ' ' not null,
  amindat     char(8) default ' ' not null,
  aminval     decimal(14,2) default 0 not null,
  aminapr     decimal(14,2) default 0 not null,
  aminua1     decimal(14,2) default 0 not null,
  aminua2     decimal(14,2) default 0 not null,
  aminur1     char(30) default ' ' not null,
  aminur2     char(30) default ' ' not null,
  aminud1     char(8) default ' ' not null,
  aminud2     char(8) default ' ' not null,
  aminuy1     char(1) default ' ' not null,
  aminuy2     char(1) default ' ' not null,
  aminspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsinsa1 on amsinsaf
(
aminreg,
aminass
);
create unique index amsinsa2 on amsinsaf
(
amincom,
aminref,
aminreg,
aminass
);
create unique index amsinsa3 on amsinsaf
(
amindat,
aminreg,
aminass
);
create unique index amsinsa4 on amsinsaf
(
aminref,
amincod,
aminreg,
aminass
);
revoke all on amsinsaf from public ; 
grant select on amsinsaf to public ; 
