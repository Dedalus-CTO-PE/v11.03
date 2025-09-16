create table pmsepbaf
(
pmebhosp    varchar2(3),
pmebward    varchar2(3),
pmebroom    varchar2(3),
pmebbedd    varchar2(3),
pmebseq1    varchar2(2),
pmebseq2    varchar2(2),
pmebseq3    varchar2(2),
pmebseq4    varchar2(2),
pmebseq5    varchar2(2),
pmebadmn    varchar2(8),
pmebedat    varchar2(8),
pmebetim    varchar2(8),
pmebewrd    varchar2(3),
pmebebed    varchar2(3),
pmebtbdt    varchar2(8),
pmebtbtm    varchar2(8),
pmebpowd    varchar2(3),
pmebpobd    varchar2(3),
pmebabrw    varchar2(3),
pmebabrb    varchar2(3),
pmebsurn    varchar2(20),
pmebgivn    varchar2(25),
pmebbrpt    varchar2(1),
pmebceas    varchar2(1),
pmeburno    varchar2(8),
pmebgend    varchar2(1),
pmebwebc    varchar2(10),
pmebdatc    varchar2(8),
pmebtimc    varchar2(8),
pmebwebu    varchar2(10),
pmebdatu    varchar2(8),
pmebtimu    varchar2(8),
pmebspar    varchar2(50),
lf          varchar2(1),
constraint pmsepba1 primary key( 
pmebhosp,
pmebward,
pmebroom,
pmebbedd,
pmebadmn)
)
tablespace pas_data 
enable primary key using index 
  tablespace pas_indx; 
create public synonym pmsepbaf for pmsepbaf;
create unique index pmsepba2 on pmsepbaf
(
pmeburno,
pmebadmn,
pmebhosp,
pmebward,
pmebroom,
pmebbedd
)
  tablespace pas_indx; 
create unique index pmsepba3 on pmsepbaf
(
pmebhosp,
pmebseq1,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
)
  tablespace pas_indx; 
create unique index pmsepba4 on pmsepbaf
(
pmebhosp,
pmebseq2,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
)
  tablespace pas_indx; 
create unique index pmsepba5 on pmsepbaf
(
pmebhosp,
pmebseq3,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
)
  tablespace pas_indx; 
create unique index pmsepba6 on pmsepbaf
(
pmebhosp,
pmebseq4,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
)
  tablespace pas_indx; 
create unique index pmsepba7 on pmsepbaf
(
pmebhosp,
pmebseq5,
pmebward,
pmebroom,
pmebbedd,
pmebadmn
)
  tablespace pas_indx; 
create unique index pmsepba8 on pmsepbaf
(
pmebhosp,
pmebward,
pmebroom,
pmebbedd,
pmebedat,
pmebetim,
pmebadmn
)
  tablespace pas_indx; 
