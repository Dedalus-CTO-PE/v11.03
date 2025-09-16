create table pmshcgaf
(
  pmhgprac    char(10) default ' ' not null,
  pmhgcntr    char(2) default ' ' not null,
  pmhgtype    char(2) default ' ' not null,
  pmhgspcd    char(10) default ' ' not null,
  pmhgpnam    char(80) default ' ' not null,
  pmhgadd1    char(60) default ' ' not null,
  pmhgadd2    char(60) default ' ' not null,
  pmhgadd3    char(60) default ' ' not null,
  pmhgadd4    char(60) default ' ' not null,
  pmhgadd5    char(60) default ' ' not null,
  pmhgadd6    char(60) default ' ' not null,
  pmhgpost    char(8) default ' ' not null,
  pmhgstat    char(4) default ' ' not null,
  pmhgpeml    char(80) default ' ' not null,
  pmhgptel    char(20) default ' ' not null,
  pmhgpfax    char(20) default ' ' not null,
  pmhgpstt    char(30) default ' ' not null,
  pmhgppcn    char(30) default ' ' not null,
  pmhgppno    char(10) default ' ' not null,
  pmhgfmdt    char(8) default ' ' not null,
  pmhgdsdt    char(8) default ' ' not null,
  pmhggpfh    char(5) default ' ' not null,
  pmhgdtfa    char(8) default ' ' not null,
  pmhgdtfe    char(8) default ' ' not null,
  pmhggppi    char(1) default ' ' not null,
  pmhgupfl    char(1) default ' ' not null,
  pmhgstts    char(1) default ' ' not null,
  pmhgpcgc    char(5) default ' ' not null,
  pmhgprmk    char(1) default ' ' not null,
  pmhgcdte    char(8) default ' ' not null,
  pmhgctim    char(8) default ' ' not null,
  pmhgwebc    char(10) default ' ' not null,
  pmhglupd    char(8) default ' ' not null,
  pmhglupt    char(8) default ' ' not null,
  pmhgwebu    char(10) default ' ' not null,
  pmhghpio    char(20) default ' ' not null,
  pmhgfxds    char(1) default ' ' not null,
  pmhgelds    char(1) default ' ' not null,
  pmhgpsci    char(20) default ' ' not null,
  pmhgsmd1    char(16) default ' ' not null,
  pmhgsmd2    char(16) default ' ' not null,
  pmhgspar    char(46) default ' ' not null,
  lf          char(1)
);
create unique index pmshcga1 on pmshcgaf
(
pmhgprac,
pmhgcntr
);
create unique index pmshcga2 on pmshcgaf
(
pmhgadd1,
pmhgprac,
pmhgcntr
);
revoke all on pmshcgaf from public ; 
grant select on pmshcgaf to public ; 
