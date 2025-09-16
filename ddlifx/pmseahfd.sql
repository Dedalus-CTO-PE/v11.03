create table pmseahaf
(
pmahfbid    char(3),
pmaharid    char(20),
pmahfrid    char(12),
pmahrptc    char(3),
pmahfscd    char(4),
pmahfcid    char(8),
pmahcfac    char(1),
pmahtcam    char(9),
pmahtbam    char(9),
pmahexam    char(9),
pmahcpam    char(9),
pmahftid    char(24),
pmahudte    char(8),
pmahutim    char(8),
pmahspar    char(30),
lf          char(1)
);
create unique index pmseaha1 on pmseahaf
(
pmahfbid,
pmaharid,
pmahfrid,
pmahrptc
);
create unique index pmseaha2 on pmseahaf
(
pmahftid,
pmahfbid,
pmaharid,
pmahfrid,
pmahrptc
);
revoke all on pmseahaf from public ; 
grant select on pmseahaf to public ; 
