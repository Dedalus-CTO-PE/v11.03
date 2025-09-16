create table amslocaf
(
  amlobld     char(3) default ' ' not null,
  amloloc     char(6) default ' ' not null,
  amlodes     char(35) default ' ' not null,
  amlour1     char(30) default ' ' not null,
  amlour2     char(30) default ' ' not null,
  amloud1     char(8) default ' ' not null,
  amloud2     char(8) default ' ' not null,
  amlouy1     char(1) default ' ' not null,
  amlouy2     char(1) default ' ' not null,
  amlospa     char(20) default ' ' not null,
  lf          char(1)
);
create unique index amsloca1 on amslocaf
(
amlobld,
amloloc
);
create unique index amsloca2 on amslocaf
(
amloloc,
amlobld
);
revoke all on amslocaf from public ; 
grant select on amslocaf to public ; 
