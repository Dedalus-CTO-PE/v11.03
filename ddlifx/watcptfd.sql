create table wataudcp
(
wtcpaudd    char(8),
wtcpaudt    char(8),
wtcpaudp    char(2),
wtcpaudr    char(1),
wtcpauds    decimal(1,0),
wtcpaudo    char(4),
wtcpdoct    char(6),
wtcpproc    char(9),
wtcpstay    decimal(3,0),
wtcptime    decimal(5,0),
wtcpspar    char(27),
lf          char(1)
);
create index wataudcp on wataudcp
(
wtcpaudd,
wtcpaudt,
wtcpaudp,
wtcpaudr
);
revoke all on wataudcp from public ; 
grant select on wataudcp to public ; 
create table watcptaf
(
wtcpdoct    char(6),
wtcpproc    char(9),
wtcpstay    decimal(3,0),
wtcptime    decimal(5,0),
wtcpspar    char(27),
lf          char(1)
);
create unique index watcpta1 on watcptaf
(
wtcpdoct,
wtcpproc
);
revoke all on watcptaf from public ; 
grant select on watcptaf to public ; 
