create table pmshpoaf
(
pmhoatyp    char(3),
pmhoclam    char(3),
pmhofund    char(6),
pmhotabt    char(3),
pmhoedat    char(8),
pmhovtyp    char(3),
pmhomaxo    char(3),
pmhowaro    char(3),
pmhocdat    char(8),
pmhoctim    char(8),
pmhocuid    char(10),
pmhoudat    char(8),
pmhoutim    char(8),
pmhouuid    char(10),
pmhospar    char(50),
lf          char(1)
);
create unique index pmshpoa1 on pmshpoaf
(
pmhoatyp,
pmhoclam,
pmhofund,
pmhotabt,
pmhoedat,
pmhovtyp
);
revoke all on pmshpoaf from public ; 
grant select on pmshpoaf to public ; 
