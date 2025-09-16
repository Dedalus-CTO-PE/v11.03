create table pmseadaf
(
pmadfbid    char(3),
pmadarid    char(20),
pmadfrid    char(12),
pmadrptc    char(3),
pmadcfec    char(4),
pmadexpc    char(3),
pmadcfet    char(80),
pmadelnm    char(127),
pmadmpid    char(8),
pmadspar    char(30),
lf          char(1)
);
create unique index pmseada1 on pmseadaf
(
pmadfbid,
pmadarid,
pmadfrid,
pmadrptc,
pmadcfec,
pmadexpc
);
revoke all on pmseadaf from public ; 
grant select on pmseadaf to public ; 
