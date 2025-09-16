create table opriteaf
(
opitcode    char(15),
opitdesc    char(50),
opitindc    char(1),
opitgrpg    char(3),
opitucss    char(2),
opitccbn    char(15),
opitcatn    char(7),
opitdipd    char(8),
opitscat    char(15),
opitsdes    char(50),
opitlmad    char(8),
opitcrst    char(1),
opitstdt    char(8),
opitnote    char(50),
opituslo    char(15),
opitculo    char(15),
opitudt1    char(50),
opitudt2    char(50),
opitudt3    char(50),
opitudt4    char(50),
opitudt5    char(50),
opitudf1    char(3),
opitudf2    char(3),
opitudf3    char(3),
opitudf4    char(3),
opitudf5    char(3),
opitdte1    char(8),
opitdte2    char(8),
opitdte3    char(8),
opitdte4    char(8),
opitdte5    char(8),
opittme1    char(8),
opittme2    char(8),
opittme3    char(8),
opittme4    char(8),
opittme5    char(8),
opitspar    char(50),
lf          char(1)
);
create unique index opritea1 on opriteaf
(
opitcode
);
create unique index opritea2 on opriteaf
(
opitdesc,
opitcode
);
create unique index opritea3 on opriteaf
(
opitgrpg,
opitcode
);
create unique index opritea4 on opriteaf
(
opitindc,
opitdesc,
opitcode
);
revoke all on opriteaf from public ; 
grant select on opriteaf to public ; 
