create table pmsepbaf
(
pmebhosp    char(3),
pmebward    char(3),
pmebroom    char(3),
pmebbedd    char(3),
pmebseq1    char(2),
pmebseq2    char(2),
pmebseq3    char(2),
pmebseq4    char(2),
pmebseq5    char(2),
pmebadmn    char(8),
pmebedat    char(8),
pmebetim    char(8),
pmebewrd    char(3),
pmebebed    char(3),
pmebtbdt    char(8),
pmebtbtm    char(8),
pmebpowd    char(3),
pmebpobd    char(3),
pmebabrw    char(3),
pmebabrb    char(3),
pmebsurn    char(20),
pmebgivn    char(25),
pmebbrpt    char(1),
pmebceas    char(1),
pmeburno    char(8),
pmebgend    char(1),
pmebwebc    char(10),
pmebdatc    char(8),
pmebtimc    char(8),
pmebwebu    char(10),
pmebdatu    char(8),
pmebtimu    char(8),
pmebspar    char(50),
lf          char(1)
);
create unique index pmsepba1 on pmsepbaf
(
pmebhosp,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
);
create unique index pmsepba2 on pmsepbaf
(
pmeburno,
pmebadmn,
pmebhosp,
pmebward,
pmebroom,
pmebbedd
);
create unique index pmsepba3 on pmsepbaf
(
pmebhosp,
pmebseq1,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
);
create unique index pmsepba4 on pmsepbaf
(
pmebhosp,
pmebseq2,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
);
create unique index pmsepba5 on pmsepbaf
(
pmebhosp,
pmebseq3,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
);
create unique index pmsepba6 on pmsepbaf
(
pmebhosp,
pmebseq4,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
);
create unique index pmsepba7 on pmsepbaf
(
pmebhosp,
pmebseq5,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
);
create unique index pmsepba8 on pmsepbaf
(
pmebhosp,
pmebward,
pmebroom,
pmebbedd,
pmebedat,
pmebetim,
pmebadmn
);
revoke all on pmsepbaf from public ; 
grant select on pmsepbaf to public ; 
