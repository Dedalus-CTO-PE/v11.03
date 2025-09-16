create table outcmnaf
(
otcmtdat    char(8),
otcmfdat    char(8),
otcmcono    char(3),
otcmcom1    char(60),
otcmcom2    char(60),
otcmcom3    char(60),
otcmcom4    char(60),
otcmsite    char(6),
otcmclin    char(6),
otcmcdat    char(8),
otcmctim    char(8),
otcmcuid    char(10),
otcmspar    char(80),
lf          char(1)
);
create unique index outcmna1 on outcmnaf
(
otcmtdat,
otcmfdat,
otcmcono
);
revoke all on outcmnaf from public ; 
grant select on outcmnaf to public ; 
