create table pricnoaf
(
prcocrno    char(8),
prcodate    char(8),
prcodebt    char(8),
prcoscan    char(2),
prcoinvn    char(8),
prcostat    char(1),
prcoreas    char(3),
prcoamnt    decimal(14,2),
prcogstm    decimal(14,2),
prcospar    char(50),
lf          char(1)
);
create unique index pricnoa1 on pricnoaf
(
prcocrno
);
create unique index pricnoa2 on pricnoaf
(
prcodebt,
prcoscan,
prcocrno
);
create unique index pricnoa3 on pricnoaf
(
prcoinvn,
prcocrno
);
create unique index pricnoa4 on pricnoaf
(
prcodate,
prcocrno
);
revoke all on pricnoaf from public ; 
grant select on pricnoaf to public ; 
