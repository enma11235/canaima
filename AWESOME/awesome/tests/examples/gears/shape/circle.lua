--DOC_GEN_IMAGE --DOC_HIDE
local shape,cr,show = ... --DOC_HIDE

shape.circle(cr, 70, 70)
show(cr) --DOC_HIDE

shape.circle(cr,20,70)
show(cr) --DOC_HIDE

shape.transform(shape.circle) : scale(0.5, 1)(cr,70,70)
show(cr) --DOC_HIDE

--DOC_HIDE vim: filetype=lua:expandtab:shiftwidth=4:tabstop=8:softtabstop=4:textwidth=80
