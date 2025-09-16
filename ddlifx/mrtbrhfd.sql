create table mrtbrhaf
(
  mrbrrqnm    char(10) default ' ' not null,
  mrbrdtri    char(8) default ' ' not null,
  mrbrtmri    char(5) default ' ' not null,
  mrbrdtre    char(8) default ' ' not null,
  mrbrtmre    char(5) default ' ' not null,
  mrbrloca    char(4) default ' ' not null,
  mrbrnumr    decimal(3,0) default 0 not null,
  mrbrreqs    char(35) default ' ' not null,
  mrbrphon    char(20) default ' ' not null,
  mrbrpagr    char(20) default ' ' not null,
  mrbrrhos    char(3) default ' ' not null,
  mrbrspar    char(47) default ' ' not null,
  lf          char(1)
);
create unique index mrtbrha1 on mrtbrhaf
(
mrbrrqnm
);
create unique index mrtbrha2 on mrtbrhaf
(
mrbrdtri,
mrbrtmri,
mrbrrqnm
);
create unique index mrtbrha3 on mrtbrhaf
(
mrbrrhos,
mrbrloca,
mrbrdtri,
mrbrtmri,
mrbrrqnm
);
revoke all on mrtbrhaf from public ; 
grant select on mrtbrhaf to public ; 
