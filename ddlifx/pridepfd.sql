create table pridepaf
(
prdpdebt    char(8),
dprdpscn    char(2),
prdpprac    char(6),
prdprect    char(12),
dprdptcn    char(3),
prdpamou    decimal(14,2),
prdpdate    char(8),
prdpspar    char(20),
lf          char(1)
);
create unique index pridepa1 on pridepaf
(
prdpdebt,
dprdpscn,
prdpprac,
prdprect,
dprdptcn
);
revoke all on pridepaf from public ; 
grant select on pridepaf to public ; 
