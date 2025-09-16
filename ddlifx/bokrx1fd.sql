create table bokrx1af
(
  bkrxbnum    char(8) default ' ' not null,
  bkrxpowd    char(3) default ' ' not null,
  bkrxadwd    char(3) default ' ' not null,
  bkrxcdte    char(8) default ' ' not null,
  bkrxpsty    char(1) default ' ' not null,
  bkrxcndt    char(8) default ' ' not null,
  bkrxudf1    char(3) default ' ' not null,
  bkrxudf2    char(3) default ' ' not null,
  bkrxudf3    char(3) default ' ' not null,
  bkrxudf4    char(3) default ' ' not null,
  bkrxudf5    char(3) default ' ' not null,
  bkrxudd1    char(8) default ' ' not null,
  bkrxudd2    char(8) default ' ' not null,
  bkrxudd3    char(8) default ' ' not null,
  bkrxudd4    char(8) default ' ' not null,
  bkrxuff1    char(80) default ' ' not null,
  bkrxuff2    char(80) default ' ' not null,
  bkrxuff3    char(80) default ' ' not null,
  bkrxuff4    char(80) default ' ' not null,
  bkrxedc1    char(10) default ' ' not null,
  bkrxedc2    char(10) default ' ' not null,
  bkrxedc3    char(10) default ' ' not null,
  bkrxodte    char(8) default ' ' not null,
  bkrxoprd    char(3) default ' ' not null,
  bkrxcrdt    char(8) default ' ' not null,
  bkrxcrtm    char(8) default ' ' not null,
  bkrxwebc    char(10) default ' ' not null,
  bkrxlupd    char(8) default ' ' not null,
  bkrxlupt    char(8) default ' ' not null,
  bkrxwebu    char(10) default ' ' not null,
  bkrxasrc    char(3) default ' ' not null,
  bkrxbldt    char(3) default ' ' not null,
  bkrxctty    char(3) default ' ' not null,
  bkrxsgbk    char(1) default ' ' not null,
  bkrxform    char(3) default ' ' not null,
  bkrxcntm    char(8) default ' ' not null,
  bkrxudt1    char(8) default ' ' not null,
  bkrxudt2    char(8) default ' ' not null,
  bkrxpobd    char(3) default ' ' not null,
  bkrxpoec    char(1) default ' ' not null,
  bkrxdiet    char(3) default ' ' not null,
  bkrxtran    char(3) default ' ' not null,
  bkrxatrn    char(3) default ' ' not null,
  bkrxanty    char(3) default ' ' not null,
  bkrxesop    char(5) default ' ' not null,
  bkrxeabr    char(3) default ' ' not null,
  bkrxauby    char(3) default ' ' not null,
  bkrxeaid    char(10) default ' ' not null,
  bkrxdror    char(3) default ' ' not null,
  bkrxudf6    char(3) default ' ' not null,
  bkrxudf7    char(3) default ' ' not null,
  bkrxpaca    char(1) default ' ' not null,
  bkrxspar    char(50) default ' ' not null,
  lf          char(1)
);
create unique index bokrx1a1 on bokrx1af
(
bkrxbnum
);
create unique index bokrx1a2 on bokrx1af
(
bkrxcrdt,
bkrxbnum
);
revoke all on bokrx1af from public ; 
grant select on bokrx1af to public ; 
