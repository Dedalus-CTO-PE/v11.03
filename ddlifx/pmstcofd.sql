create table pmstcoaf
(
pmtccode    char(10),
pmtctcom    char(3),
pmtclnum    char(3),
pmtccomm    char(70),
pmtcudat    char(8),
pmtcutim    char(8),
pmtcuuid    char(10),
pmtcspar    char(30),
lf          char(1)
);
create unique index pmstcoa1 on pmstcoaf
(
pmtccode,
pmtctcom,
pmtclnum
);
create unique index pmstcoa2 on pmstcoaf
(
pmtccode,
pmtclnum,
pmtctcom
);
create unique index pmstcoa3 on pmstcoaf
(
pmtctcom,
pmtclnum,
pmtccode
);
revoke all on pmstcoaf from public ; 
grant select on pmstcoaf to public ; 
