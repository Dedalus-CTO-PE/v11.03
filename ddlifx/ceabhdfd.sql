create table ceabhdaf
(
  cebhbat     char(5) default ' ' not null,
  cebhdat     char(8) default ' ' not null,
  cebhuid     char(4) default ' ' not null,
  cebhtyp     decimal(1,0) default 0 not null,
  cebhhcd     char(2) default ' ' not null,
  cebhspc     char(3) default ' ' not null,
  cebhtot     decimal(14,2) default 0 not null,
  cebhur1     char(30) default ' ' not null,
  cebhur2     char(30) default ' ' not null,
  cebhud1     char(8) default ' ' not null,
  cebhud2     char(8) default ' ' not null,
  cebhuy1     char(1) default ' ' not null,
  cebhuy2     char(1) default ' ' not null,
  cebhspa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index ceabhda1 on ceabhdaf
(
cebhbat
);
revoke all on ceabhdaf from public ; 
grant select on ceabhdaf to public ; 
