create table pmsiftaf
(
pmifurno    char(8),
pmifadmn    char(8),
pmifvtyp    char(2),
pmifcloc    char(6),
pmificat    char(2),
pmifityp    char(3),
pmifiloc    char(3),
pmifidte    char(8),
pmifitim    char(8),
pmiflvis    char(2),
pmifdtis    char(8),
pmiftmis    char(8),
pmifdpnd    char(3),
pmifltgp    char(1),
pmifgvtn    char(70),
pmifgvtc    char(3),
pmifspar    char(20),
lf          char(1)
);
create unique index pmsifta1 on pmsiftaf
(
pmifadmn
);
create unique index pmsifta2 on pmsiftaf
(
pmifurno,
pmifadmn
);
create unique index pmsifta3 on pmsiftaf
(
pmifidte,
pmifvtyp,
pmifadmn
);
revoke all on pmsiftaf from public ; 
grant select on pmsiftaf to public ; 
