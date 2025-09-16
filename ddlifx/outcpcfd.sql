create table outcpcaf
(
  otcpsite    char(6) default ' ' not null,
  otcpctyp    char(6) default ' ' not null,
  otcpproc    char(9) default ' ' not null,
  otcpdesc    char(70) default ' ' not null,
  otcpicdc    char(9) default ' ' not null,
  otcpactv    char(1) default ' ' not null,
  otcpcdat    char(8) default ' ' not null,
  otcpctim    char(8) default ' ' not null,
  otcpcuid    char(10) default ' ' not null,
  otcpudat    char(8) default ' ' not null,
  otcputim    char(8) default ' ' not null,
  otcpuuid    char(10) default ' ' not null,
  otcpspar    char(30) default ' ' not null,
  lf          char(1)
);
create unique index outcpca1 on outcpcaf
(
otcpsite,
otcpctyp,
otcpproc
);
create unique index outcpca2 on outcpcaf
(
otcpsite,
otcpctyp,
otcpdesc,
otcpproc
);
revoke all on outcpcaf from public ; 
grant select on outcpcaf to public ; 
