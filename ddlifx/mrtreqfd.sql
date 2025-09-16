create table mrtreqaf
(
dmrrqnum    char(10),
mrrqdate    char(8),
mrrqtime    char(8),
mrrqdept    char(30),
mrrqrqst    char(30),
mrrqurgn    char(30),
mrrqurno    char(8),
mrrqopid    char(4),
mrrqhosp    char(3),
mrrqspar    char(27),
lf          char(1)
);
create unique index mrtreqa1 on mrtreqaf
(
dmrrqnum
);
create unique index mrtreqa2 on mrtreqaf
(
mrrqdate,
mrrqtime,
dmrrqnum
);
create unique index mrtreqa3 on mrtreqaf
(
mrrqdept,
mrrqdate,
mrrqtime,
dmrrqnum
);
revoke all on mrtreqaf from public ; 
grant select on mrtreqaf to public ; 
