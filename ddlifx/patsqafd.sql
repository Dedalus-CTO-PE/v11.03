create table patsqaaf
(
ptsqcode    char(6),
ptsqtcom    char(1),
ptsqtcod    char(3),
ptsqdcre    char(8),
ptsqlmod    char(8),
ptsqtlmo    char(8),
ptsqmope    char(4),
ptsqspar    char(30),
lf          char(1)
);
create unique index patsqaa1 on patsqaaf
(
ptsqcode,
ptsqtcom,
ptsqtcod
);
revoke all on patsqaaf from public ; 
grant select on patsqaaf to public ; 
