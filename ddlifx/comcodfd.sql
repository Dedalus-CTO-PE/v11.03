create table comcodaf
(
  cmcdtcod    char(2) default ' ' not null,
  cmcdacod    char(3) default ' ' not null,
  cmcddesc    char(20) default ' ' not null,
  cmcdhdpe    char(4) default ' ' not null,
  cmcdfmdt    char(8) default ' ' not null,
  cmcdtodt    char(8) default ' ' not null,
  cmcdassc    decimal(6,0) default 0 not null,
  cmcdnate    char(4) default ' ' not null,
  cmcdsi01    char(1) default ' ' not null,
  cmcdsi02    char(1) default ' ' not null,
  cmcdsi03    char(1) default ' ' not null,
  cmcdsi04    char(1) default ' ' not null,
  cmcdsi05    char(1) default ' ' not null,
  cmcdsi06    char(1) default ' ' not null,
  cmcdsi07    char(1) default ' ' not null,
  cmcdsi08    char(1) default ' ' not null,
  cmcdsi09    char(1) default ' ' not null,
  cmcdsi10    char(1) default ' ' not null,
  cmcdsi11    char(1) default ' ' not null,
  cmcdgrpv    char(3) default ' ' not null,
  cmcddeft    char(1) default ' ' not null,
  cmcdsecl    char(2) default ' ' not null,
  cmcdspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index comcoda1 on comcodaf
(
cmcdtcod,
cmcdacod
);
create unique index comcoda2 on comcodaf
(
cmcdtcod,
cmcddesc,
cmcdacod
);
create unique index comcoda3 on comcodaf
(
cmcdacod,
cmcdtcod
);
create unique index comcoda4 on comcodaf
(
cmcdacod,
cmcddesc,
cmcdtcod
);
create unique index comcoda5 on comcodaf
(
cmcdtcod,
cmcdhdpe,
cmcdacod
);
create unique index comcoda6 on comcodaf
(
cmcdtcod,
cmcdacod,
cmcdfmdt
);
revoke all on comcodaf from public ; 
grant select on comcodaf to public ; 
