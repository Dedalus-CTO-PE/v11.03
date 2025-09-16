create table nzpbf1af
(
nzbfhosp    char(3),
nzbfclmc    char(3),
nzbfcntr    char(6),
nzbfftab    char(8),
nzbfatyp    char(3),
nzbfbtyp    char(3),
nzbfefdt    char(8),
nzbfeday    char(3),
nzbfrate    decimal(16,2),
nzbfreba    decimal(16,2),
nzbfdesc    char(30),
nzbfcdat    char(8),
nzbfctim    char(8),
nzbfcuid    char(10),
nzbfudat    char(8),
nzbfutim    char(8),
nzbfuuid    char(10),
nzbfspar    char(60),
lf          char(1)
);
create unique index nzpbf1a1 on nzpbf1af
(
nzbfhosp,
nzbfclmc,
nzbfcntr,
nzbfftab,
nzbfatyp,
nzbfbtyp,
nzbfefdt,
nzbfeday
);
revoke all on nzpbf1af from public ; 
grant select on nzpbf1af to public ; 
