create table patdetaf
(
  ptdetype    char(1) default ' ' not null,
  ptdeinvn    char(8) default ' ' not null,
  ptdeagnt    char(3) default ' ' not null,
  ptdedtcl    char(8) default ' ' not null,
  ptdecdat    char(8) default ' ' not null,
  ptdectim    char(8) default ' ' not null,
  ptdecuid    char(10) default ' ' not null,
  ptdeudat    char(8) default ' ' not null,
  ptdeutim    char(8) default ' ' not null,
  ptdeuuid    char(10) default ' ' not null,
  ptdeurno    char(8) default ' ' not null,
  ptdesyst    char(1) default ' ' not null,
  ptderpay    decimal(14,2) default 0 not null,
  ptdefreq    char(3) default ' ' not null,
  ptdespar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index patdeta1 on patdetaf
(
ptdetype,
ptdeinvn,
ptdesyst
);
create unique index patdeta2 on patdetaf
(
ptdeurno,
ptdetype,
ptdeinvn,
ptdesyst
);
revoke all on patdetaf from public ; 
grant select on patdetaf to public ; 
