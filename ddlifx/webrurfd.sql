create table webruraf
(
wbruusid    char(10),
wbrugrid    char(5),
wbruspar    char(80),
lf          char(1)
);
create unique index webrura1 on webruraf
(
wbruusid,
wbrugrid
);
create unique index webrura2 on webruraf
(
wbrugrid,
wbruusid
);
revoke all on webruraf from public ; 
grant select on webruraf to public ; 
