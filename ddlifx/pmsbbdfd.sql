create table pmsbbdaf
(
pmbdhosp    char(3),
pmbdward    char(3),
pmbdroom    char(3),
pmbdbedd    char(3),
pmbdseq1    char(2),
pmbdseq2    char(2),
pmbdseq3    char(2),
pmbdseq4    char(2),
pmbdseq5    char(2),
pmbdcadm    char(8),
pmbdtbdt    char(8),
pmbdtbtm    char(8),
pmbdpowd    char(3),
pmbdpobd    char(3),
pmbdsurn    char(20),
pmbdgivn    char(25),
pmbdgend    char(1),
pmbdhfst    char(1),
pmbdceas    char(1),
pmbdurno    char(8),
pmbdewrd    char(3),
pmbdebed    char(3),
pmbdwebc    char(10),
pmbddatc    char(8),
pmbdtimc    char(8),
pmbdwebu    char(10),
pmbddatu    char(8),
pmbdtimu    char(8),
pmbdspar    char(50),
lf          char(1)
);
create unique index pmsbbda1 on pmsbbdaf
(
pmbdhosp,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
);
create unique index pmsbbda2 on pmsbbdaf
(
pmbdurno,
pmbdcadm,
pmbdhosp,
pmbdward,
pmbdroom,
pmbdbedd
);
create unique index pmsbbda3 on pmsbbdaf
(
pmbdhosp,
pmbdseq1,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
);
create unique index pmsbbda4 on pmsbbdaf
(
pmbdhosp,
pmbdseq2,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
);
create unique index pmsbbda5 on pmsbbdaf
(
pmbdhosp,
pmbdseq3,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
);
create unique index pmsbbda6 on pmsbbdaf
(
pmbdhosp,
pmbdseq4,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
);
create unique index pmsbbda7 on pmsbbdaf
(
pmbdhosp,
pmbdseq5,
pmbdward,
pmbdroom,
pmbdbedd,
pmbdcadm
);
revoke all on pmsbbdaf from public ; 
grant select on pmsbbdaf to public ; 
