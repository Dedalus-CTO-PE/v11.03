create table pcpaudcr
(
pccraudd    char(8),
pccraudt    char(8),
pccraudp    char(2),
pccraudr    char(1),
pccrauds    decimal(1,0),
pccraudo    char(4),
pccrctyp    char(9),
pccrclin    char(9),
pccrdiag    char(9),
pccrrelt    char(9),
pccrspar    char(13),
lf          char(1)
);
create index pcpaudcr on pcpaudcr
(
pccraudd,
pccraudt,
pccraudp,
pccraudr
);
revoke all on pcpaudcr from public ; 
grant select on pcpaudcr to public ; 
create table pcpcrlaf
(
pccrctyp    char(9),
pccrclin    char(9),
pccrdiag    char(9),
pccrrelt    char(9),
pccrspar    char(13),
lf          char(1)
);
create unique index pcpcrla1 on pcpcrlaf
(
pccrctyp,
pccrclin,
pccrdiag,
pccrrelt
);
revoke all on pcpcrlaf from public ; 
grant select on pcpcrlaf to public ; 
