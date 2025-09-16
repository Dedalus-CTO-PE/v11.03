create table nzpibraf
(
nzibhosp    char(3),
nzibclmc    char(3),
nzibcntr    char(6),
nzibftab    char(8),
nzibcprc    char(9),
nzibefdt    char(8),
nzibbrcd    char(3),
nzibamnt    decimal(16,2),
nzibspar    char(60),
lf          char(1)
);
create unique index nzpibra1 on nzpibraf
(
nzibhosp,
nzibclmc,
nzibcntr,
nzibftab,
nzibcprc,
nzibefdt,
nzibbrcd
);
revoke all on nzpibraf from public ; 
grant select on nzpibraf to public ; 
