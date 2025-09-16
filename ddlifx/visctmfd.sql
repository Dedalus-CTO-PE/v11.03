create table visctmaf
(
  vscmtem     char(3) default ' ' not null,
  vscmunq     char(3) default ' ' not null,
  vscmcmt     char(70) default ' ' not null,
  vscmspa     char(30) default ' ' not null,
  lf          char(1)
);
create unique index visctma1 on visctmaf
(
vscmtem,
vscmunq
);
revoke all on visctmaf from public ; 
grant select on visctmaf to public ; 
