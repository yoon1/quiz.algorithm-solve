package main

import (
	"github.com/stretchr/testify/assert"
	"testing"
)

func Test_triangularSum(t *testing.T) {
	tcs := []struct {
		s        string
		expected string
	}{
		{"string", "rtsng"},
		{"poiinter", "ponter"},
	}

	for _, tc := range tcs {
		t.Run("성공", func(t *testing.T) {
			result := finalString(tc.s)
			assert.Equal(t, tc.expected, result)
		})
	}
}
