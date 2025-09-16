create table hichisaf
(
  hchsbtch    char(5) default ' ' not null,
  hchspmci    char(8) default ' ' not null,
  hchspyee    char(10) default ' ' not null,
  hchspsrv    char(10) default ' ' not null,
  hchstdat    char(8) default ' ' not null,
  hchsttim    char(8) default ' ' not null,
  hchstuid    char(10) default ' ' not null,
  hchsstat    char(2) default ' ' not null,
  hchsspar    char(70) default ' ' not null,
  lf          char(1)
);
create unique index hichisa1 on hichisaf
(
hchsbtch,
hchspsrv,
hchspmci,
hchspyee,
hchstdat,
hchsttim
);
revoke all on hichisaf from public ; 
grant select on hichisaf to public ; 
