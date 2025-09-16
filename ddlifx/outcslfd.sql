create table outcslaf
(
otcssite    char(6),
otcsclin    char(6),
otcsdate    char(8),
otcsstrt    char(5),
dotcsuni    char(2),
otcscdte    char(8),
otcsctim    char(8),
otcsctyp    char(6),
otcsreas    char(3),
otcsspar    char(27),
lf          char(1)
);
create unique index outcsla1 on outcslaf
(
otcssite,
otcsclin,
otcsdate,
otcsstrt,
dotcsuni
);
create unique index outcsla2 on outcslaf
(
otcssite,
otcsdate,
otcsclin,
otcsstrt,
dotcsuni
);
revoke all on outcslaf from public ; 
grant select on outcslaf to public ; 
